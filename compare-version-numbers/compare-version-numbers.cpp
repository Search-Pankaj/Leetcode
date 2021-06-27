class Solution {
public:
    int compareVersion(string version1, string version2) {
        unsigned long long a = 0;
        unsigned long long b = 0;
        for(int i=0,j=0 ; ( i< version1.length() || j< version2.length() ); ){
            while( i< version1.length()  && version1[i] != '.' )
            {
                a = a*10+(version1[i] - '0');
                i++ ;
            }
            while(  j< version2.length()  && version2[j] != '.' ){
                b = b*10+(version2[j] - '0');
                j++ ;
            }
            if(a>b) return 1;
            if(b>a) return -1;
            a=0;
            b=0;
            i++;
            j++;
        }
        return 0;
    }
};