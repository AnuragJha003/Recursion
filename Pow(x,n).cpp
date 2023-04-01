double calculation(double x, long int n) //LONG AND DOUBLE TAKEN FOR A
     {
         if(n==0) return 1;//BASE CASE 
         else if(n<0)
             return calculation(1/x,-n);//GAR POWER -VE H THEN WE WILL TAKE THE VALUE 
         else if(n%2)
             return calculation(x*x,n/2)*x;//for odd numbers 2^5 types means 4^2 * 2
         else
             return calculation(x*x,n/2);//for  even numbers yeh rhega THE VALUE IN HERE  2^10= 4^5
     }
   
    double myPow(double x, long int n) {
       
     return calculation(x,n)   ;//CALCULTAION M HI RHEGA THEN 
    }
};

https://leetcode.com/problems/powx-n/
