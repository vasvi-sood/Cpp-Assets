         double ti=4.43867;
         //start with ti=4.43867
      
         //extract first 3 decimal places and then convert to 2 before decimal AND TWO AFTER 
         double ti1=(floor(ti*1000))/10;
          //ti1=443.8
        
         // based on 0.8 we decide if we need to round off or not
        // add 0.5 if decimal place is >=0.5 ones place change that's exactly what we want
        double ti2=ti1+0.5;
             //ti2=444.3
        
        // we just want the decimal portition extract it
        double ti3=floor(ti2);
         //ti3=444
       
       //to convert it back to 2 decimal places divide by 100
        double time=ti3/100;
        //time=4.44
