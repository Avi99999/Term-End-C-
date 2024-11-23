#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int choice;
do{ cout << "***Menu***" << endl;
    cout << "1. Simple Interest: " << endl;
    cout << "2. Area and Perimeter of Rectangle: " << endl;
    cout << "3. Odd or Even Number: " << endl;
    cout << "4. Grade of Student: " << endl;
    cout << "5. Type of Triangle: " << endl;
    cout << "6. Squared Sum till N: " << endl;
    cout << "7. Swap Numbers without third variable: " << endl;
    cout << "8. Area and Circumference of Circle: " << endl;
    cout << "9. Value rotation of three variables: " << endl;
    cout << "10. Celcius and Farenheit Converter: " << endl;
    cout << "11. Sum of Digits of a 4 digit number: "<< endl;
    cout << "12. Reverse the Digits of a 4 digit number: "<< endl;
    cout << "13. Area of triangle: "<< endl;
    cout << "14. Compound Interest Calculator: "<< endl;
    cout << "15. GST Calculator: " << endl;
    cout << "16. Second Largest Number: "<< endl;
    cout << "17. Roots of Quadratic Equation: "<< endl;
    cout << "18. Sum of Numbers between M and N: "<< endl;
    cout << "19. Sum of Digits using do-while loop: "<< endl;
    cout << "20. Fibonacci Series using for loop: "<< endl;
    cout << "21. Armstrong number: "<< endl;
    cout << "22. Palindrome number: "<< endl;
    cout << "23. Prime number: "<< endl;
    cout << "24. LCM and GCD of two numbers: " << endl;
    cout << "25. Uppercase and Lowercase characters from A to Z using ASCII: " << endl;
    cin >> choice;


    switch(choice)
    {

    case 1:
        {
            int SI, Amt, PrincipalAmt, Rate, Time;

            cout << "Enter Principal Amount: ";
            cin >> PrincipalAmt;

            cout << "Enter Rate of Interest: ";
            cin >> Rate;

            cout << "Enter Time: ";
            cin >> Time;

            SI=(PrincipalAmt*Rate*Time)/100;
            Amt=PrincipalAmt+SI;

            cout << "The interest is: " << SI << endl;
            cout << "The amount is: " << Amt << endl;
            break;
        }

    case 2:
        {
            int lengthRect, widthRect, AreaRect, PerimeterRect;

            cout << "Enter the length of the rectangle: ";
            cin >> lengthRect;

            cout << "Enter the width of the rectangle: ";
            cin >> widthRect;

            AreaRect=lengthRect*widthRect;
            PerimeterRect=2*(lengthRect+widthRect);

            cout << "The area is: " << AreaRect << endl;
            cout << "The perimeter is: " << PerimeterRect <<endl;
            break;
        }
    case 3:
        {
            int NumberOddorEven;

            cout << "Enter a number: ";
            cin >> NumberOddorEven;

            if(NumberOddorEven%2==0)
            {
                cout << NumberOddorEven << " is even." << endl;
            }
            else
            {
                cout << NumberOddorEven << " is odd." << endl;
            }
            break;
        }

    case 4:
        {
            int GradePercent;

            cout <<"Enter the Percentage obtained by the student: ";
            cin >> GradePercent;

            if(GradePercent>=90)
            {
                cout << "A" << endl;
            }
            else if (GradePercent>=80 & GradePercent<90)
            {
                cout << "B"<< endl;
            }
            else if (GradePercent>=65 & GradePercent<80)
            {
                cout << "C"<< endl;
            }
            else
            {
                cout <<"D"<< endl;
            }
            break;
        }

    case 5:
        {

            int sideOfTriangle1, sideOfTriangle2, sideOfTriangle3, sumofsides1, sumofsides2, sumofsides3;

            cout << "Enter first side of triangle: ";
            cin >> sideOfTriangle1;

            cout << "Enter second side of triangle: ";
            cin >> sideOfTriangle2;

            cout << "Enter third side of triangle: ";
            cin >> sideOfTriangle3;

            sumofsides1=sideOfTriangle1+sideOfTriangle2;
            sumofsides2=sideOfTriangle2+sideOfTriangle3;
            sumofsides3=sideOfTriangle1+sideOfTriangle3;

            if(sumofsides1<sideOfTriangle3 || sumofsides2<sideOfTriangle1 || sumofsides3<sideOfTriangle2)
            {
                cout << "The Triangle is Invalid"<< endl;
            }
            else 
            {
                cout << "The Triangle is valid" << endl;

                    if(sideOfTriangle1==sideOfTriangle2==sideOfTriangle3)
                    {
                        cout << "Equilateral Triangle"<< endl;
                    }
                    else if(sideOfTriangle1==sideOfTriangle2 || sideOfTriangle2==sideOfTriangle3 || sideOfTriangle1==sideOfTriangle3 )
                    {
                        cout << "Isosceles Triangle"<< endl;
                    }
                    else
                    {
                        cout << "Scalene Triangle"<< endl;
                    }

            }
            break;
        }

    case 6:
    {

        int NumberSquareSum, SquareSumIncrementer;
        int sum=0;

        cout << "Enter a number: ";
        cin >> NumberSquareSum;

            for( SquareSumIncrementer=1;SquareSumIncrementer<=NumberSquareSum;SquareSumIncrementer++)
            {
                sum=pow(SquareSumIncrementer,2)+sum;
            }
            cout << sum;
            break;
    }

    case 7:
        {
            int swapno1, swapno2;

            cout << "Enter the first number: ";
            cin >> swapno1;

            cout << "Enter the second number: ";
            cin >> swapno2;

            swapno1=swapno1+swapno2;
            swapno2=swapno1-swapno2;
            swapno1=swapno1-swapno2;

            cout << "Swapped Number 1: " << swapno1 << endl;

            cout << "Swapped Number 2: " << swapno2 << endl;
            break;
        }
    
    case 8: 
        {
            int radius, area, circumference;

            cout << "Enter the radius of the circle: ";
            cin >> radius;

            area=3.14*pow(radius,2);
            circumference=2*3.14*radius;

            cout << "The area of the circle is: " << area;
            cout << "The circumference of the cirle is: "<< circumference;

            break;
        }
    
    case 9:
        {
            int x,y,z,temp;

            cout << "Enter the first variable: ";
            cin >> x;

            cout << "Enter the second variable: ";
            cin >> y;

            cout << "Enter the third variable: ";
            cin >> z;

            temp=x;

            x=y;
            y=z;
            z=temp;

            cout << "Rotated first variable: " << x << endl;
            cout << "Rotated second variable: " << y << endl;
            cout << "Rotated third variable: " << z;
            break;
        }

    case 10:
        {
            char tempunit;
            int temperature;
            int celcius;
            int farenheit;

            cout << "Celcius('C') or Farenheit('F'): ";
            cin >> tempunit;

            cout << "Enter the temperature: ";
            cin >> temperature;

            if (tempunit=='C')
            {
                farenheit=(temperature*9/5) + 32;
                cout << farenheit << " Degrees Farenheit";
            }
            else if (tempunit=='F')
            {
                celcius= (temperature-32)*5/9;
                cout << celcius << " Degrees celcius";
            }
            else
            {
                cout << "Enter valid input! ";
            }
            break;
        }
    
    case 11:
        {
            int n,i,sum=0;

            cout << "Enter a 4 digit number: ";
            cin >> n;

            for (i=0;i<=4;i++)
            {
                sum+=n%10;
                n=n/10;
            }
            cout << "Sum of digits: " << sum;
            break;
        }

    case 12:
        {
            int n,i,revno=0;

            cout << "Enter a 4 digit number: ";
            cin >>n;

            for(i=4;i>=0;i--)
            {
                revno+=(n%10)*pow(10,i-1);
                n=n/10;

            }
            cout << "Reversed Number: " << revno;
            break;
        }
    
    case 13:
        {
            int side1, side2, side3, semiperimeter,area;

            cout << "Enter the first side: ";
            cin >> side1;

            cout << "Enter the second side: ";
            cin >> side2;

            cout << "Enter the third side: ";
            cin >> side3;

            if (side1+side2<side3 || side1+side3<side2 || side2+side3<side1)
            {
                cout << "Invalid Triangle";
            }
            else
            {
                cout << "Valid Triangle" << endl;
                semiperimeter=(side1+side2+side3)/2;
                area=sqrt((semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3)*(semiperimeter));
                cout << "Area is: " << area;
                break;
            }
        }
    case 14:
        {
            int Amt, Principal, Time, Rate, n, Interest;

            cout << "Enter the Principal Amount: ";
            cin >> Principal;

            cout << "Enter the Rate: ";
            cin >> Rate;

            cout << "Enter number of times interest applied per time period: ";
            cin >> n;

            cout << "Enter Time Elapsed: ";
            cin >> Time;

            Amt= Principal* pow(1+(Rate/n), n*Time );
            Interest=Amt-Principal;
            cout << "The Amount is: " << Amt <<endl;
            cout << "The Interest is: "<< Interest;
            break;
        }
    
    case 15:
    {
        int originalPrice;
        int GSTRate;
        int finalPrice;

        cout << "Enter the Original Price of the Product: ";
        cin >> originalPrice;

        cout << "GST Rate: ";
        cin >> GSTRate;

        finalPrice=originalPrice*GSTRate/100 + originalPrice;

        cout << "Price before GST is " << originalPrice <<" and Price after GST is " << finalPrice;
        break;
    }

    case 16:
    {
        int a,b,c;

        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;

        cout << "Enter third number: ";
        cin >> c;

        if((a<b && a>c) || (a<c && a>b) )
        {
            cout << a << " is the second largest number.";
        }
        else if((b<a && b>c) || (b<c && b>a))
        {
            cout << b << " is the second largest number.";
        }
        else
        {
            cout << c << " is the second largest number.";
        }
        break;
    }
    
    case 17:
    {
        float a,b,c,root1,root2;

        cout << "Enter the coefficient of x^2: ";
        cin >> a;

        cout << "Enter the coefficient of x: ";
        cin >> b;

        cout << "Enter the constant: ";
        cin >> c;

        if(((pow(b,2))-(4*a*c))<0)
        {
            cout << "Invalid Equation";
        }
        else
        {
        root1=(-b+sqrt((pow(b,2))-(4*a*c)))/2*a;
        root2=(-b-sqrt((pow(b,2))-(4*a*c)))/2*a;
        cout << "The roots of the quadratic equation are: " << root1 << " and "<< root2;
        }
        break;
    }

    case 18:
    {
        int M, N,i,sum=0;

        cout << "Enter a number: ";
        cin >> M;

        cout << "Enter a number greater than the previous number: ";
        cin >> N;

        for(i=M+1;i<N;i++)
        {
            sum+=i;
        }
        cout << "The sum of all numbers between M and N is: " << sum;
        break;
    }

    case 19:
    {
        int n,sum=0;

        cout << "Enter a number: ";
        cin >> n;

        do{
            sum+=n%10;
            n=n/10;
        }while(n>0);
        cout << "The sum of digits is: " << sum;
        break;
    }
    case 20:
    {
        int n, temp, firstno, secondno,i;

        cout << "Enter a number 'n': ";
        cin >> n;
        firstno=0;
        cout << firstno <<endl;
        secondno=1;
        cout << secondno <<endl;
        for(i=1; i<n-1; i++)
        {
            
            temp=firstno+secondno;
            cout <<temp << endl;
            firstno=secondno;
            secondno=temp;
        }
        break;

    }
    case 21:
    {
        int n,remainder=0, i, originalnum,digits=0,sum=0,realnum;

        cout << "Enter a number: ";
        cin >> n;

        originalnum=n;
        realnum=n;
    
        while(n!=0)
        {
            digits++;
            n=n/10;
        }
        for(i=0;i<digits;i++)
        {
            remainder= originalnum % 10;
            sum+=pow(remainder,digits);
            originalnum=originalnum/10;
        }
        cout << digits <<endl;
        if (sum==realnum)
        {
            cout << "Armstrong Number.";

        }
        else
        {
            cout << "Not Armstrong Number.";
        }
        break;
    }

    case 22:
    {
        int n, reversednum=0, i, digits=0, a,x,originalnum;

        cout << "Enter a number: ";
        cin >> n;

        a=n;
        originalnum=n;

        while(n>0)
        {
            digits++;
            n=n/10;
        }
    while(a!=0)
    {
        for(i=digits;i>=0;i--)
        {   
            x=a%10;
            reversednum+=x*pow(10,i-1);
            a=a/10;
        }
    }
        if(reversednum==originalnum)
        {
            cout << "The number is palindrome. ";
        }
        else
        {
            cout << "Not Palindrome";
        }
    }
    break;
    
    case 23:
    {
        int num, number;

        cout << "Enter a number: ";
        cin >> number;

        num=number;
        if (number <= 1) return false; // 0 and 1 are not prime numbers
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                number=false; 
            }
        }
        number=true;

        if (number==true) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num<< " is not a prime number." << endl;
        }

    }

    case 24:
    {
        int num1, num2;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        if (num1 <= 0 || num2 <= 0) {
            cout << "Please enter positive integers only." << endl;
            return 1; 
        }

        int a = num1, b = num2;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = a;

        int lcm = (num1 * num2) / gcd;

        cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
        cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

        return 0;
    }
    case 25:
    {
        cout << "Uppercase Letters: ";
        for (int i = 65; i <= 90; i++) { // ASCII range for 'A' to 'Z'
            if (i < 65 || i > 90) continue; // Skip unnecessary checks (not strictly needed here)
            cout << char(i) << " ";
        }
        cout << endl;

        cout << "Lowercase Letters: ";
        for (int i = 97; i <= 122; i++) { // ASCII range for 'a' to 'z'
            if (i < 97 || i > 122) continue; // Skip unnecessary checks (not strictly needed here)
            cout << char(i) << " ";
        }
        cout << endl;
    }
    }

}while(choice!=28);

}