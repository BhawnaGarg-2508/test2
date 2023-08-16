class Solution {
public:
    string intToRoman(int num) {
        
        string ans = "";

        while(num > 0){
            if(num> 0 && num < 5){
                if(num == 4){
                    ans += "IV";
                    num -= 4;
                }
                else{
                    ans += "I";
                    num--;
                }
            }

            else if(num >= 5 && num < 10){
                if(num == 9){
                    ans += "IX";
                    num -= 9;
                }
                else{
                    ans += "V";
                    num -= 5;
                }
            }


            else if(num >= 10 && num< 50){
                if(num >= 40 ){
                    ans += "XL";
                    num -= 40;
                }

                else{
                    ans += "X";
                    num -= 10;
                }

            }

            else if(num >= 50 && num< 100){
                if(num >= 90 ){
                    ans += "XC";
                    num -= 90;
                }

                else{
                    ans += "L";
                    num -= 50;
                }

            }

            else if(num >= 100 && num< 500){
                if(num >= 400 ){
                    ans += "CD";
                    num -= 400;
                }

                else{
                    ans += "C";
                    num -= 100;
                }

            }

            else if(num >= 500 && num< 1000){
                if(num >= 900 ){
                    ans += "CM";
                    num -= 900;
                }

                else{
                    ans += "D";
                    num -= 500;
                }

            }

            else if(num >= 1000){
                ans += "M";
                num -= 1000;

            }




        }

        return ans;
    }
};