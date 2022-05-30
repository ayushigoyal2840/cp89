class Solution {
public:
    string discountPrices(string s, int d) {
        string ans="";
        for(int i=0;i<s.size();){
            if(s[i]!='$'){
                ans+=s[i];
                i++;
            }else{
                if((i>0 && s[i-1]!=' ') || !isdigit(s[i+1])){
                    ans+=s[i];
                    i++;
                }else{
                    i++;
                    long val=0;
                    while(i<s.size() && isdigit(s[i])){
                        val *= 10;
                        val += (s[i]-'0');
                        i++;
                    }
                    
                    if(i<s.size() && s[i]!=' '){
                        ans += ('$' + to_string(val));
                    }else{
                        val = (val*100 - val*d);
                        int intpart = (val/100)*100;
                        int decipart = val-intpart;
                        string deci = to_string(decipart);
                        string integer = to_string(val/100);
                        if(deci.size() < 2) deci = '0'+ deci;
                        ans += ('$' + integer + '.' + deci);
                    }
                }  
            }
        }
        return ans;
    }
};