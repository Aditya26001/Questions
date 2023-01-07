class Solution {
public:
    string categorizeBox(long length, long width, long height, int mass) {
        long long volume=length*width*height;
        const long long H = 1e+9;
        const long long D = 1e+4;
        bool isBulky = length>=D || width>=D ||height>=D || volume>=H;
        bool isHeavy = mass>=100;
        
        if(isBulky && isHeavy){
            return "Both";
        }
        if(isBulky){
            return "Bulky";
        }
        if(isHeavy){
            return "Heavy";
        }
        return "Neither";
    }
};
