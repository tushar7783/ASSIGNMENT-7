/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0*/

 

class Solution {
public:
    int guessNumber(int n) {
            long long low =1;
     long long high=n;
     while(low<=high){
         int mid=(low+high)/2;
         int a=guess(mid);
         if(a==1){
             low=mid+1;
         }
         else if(a==0){
             return mid;
         }
         else{
             high=mid-1;
         }
     }
   return 0;
    }
};
