#include <stdio.h>
#define PI 3.14
#include <math.h>

int main(void){
	
	int process,areasq,perimetersq,side,number1,cube,r,longside,shortside,aread,perimeterd,number,result;
	float areac,perimeterc;
	
	printf("*****************\n");
	printf("Math Menu\n");
    printf("*****************\n\n");
    
	printf("1-The area and the perimeter of square.\n");
	printf("2-The cube of the entered number.\n");
	printf("3-The area of the circle.\n");
	printf("4-Rectangle area and perimeter calculation.\n");
	printf("5-Find the absolute value of the entered number.\n\n");
	printf("Choose your action:\n");
	scanf("%d",&process);
	
	switch(process){
		
		case 1: printf("Enter the side length of the square:");	
		        scanf("%d",&side);
		        
	            areasq=side*side;
	            perimetersq=4*side;
	            
	            printf("The area of the square is %d.\n",areasq);
	            printf("The perimeter of the square is %d.",perimetersq);
	            
	        	break;
		
		case 2: printf("Enter the number you want to find the cube of:");        
		        scanf("%d",&number1);
		        cube=number1*number1*number1;
		        printf("The cube of the number is %d.",cube);
		        break;
		        
		case 3: printf("Enter the radius of the circle:");
		        scanf("%d",&r);
		        areac=PI*r*r;
		        perimeterc=2*PI*r;
		        printf("The area of the circle is %.2f\n",areac);
		        printf("The perimeter of the circle is %.2f",perimeterc);
		        break;
		        
		case 4: printf("Enter the long side of the rectangle:");
		        scanf("%d",&longside);
		        printf("Enter the short side of the rectangle:");
		        scanf("%d",&shortside);
		        
		        aread=longside*shortside;
		        perimeterd=2*(longside+shortside);
		        
				printf("The area of the rectangular is %d.\n",aread);
		        printf("Perimeter of rectangle is %d.",perimeterd);
		       
		        break;
		        
		case 5: printf("Enter the number you want to find the absolute value of:");
		        scanf("%d",&number);
			    result=abs(number);
			    printf("The result is %d",result);
			    break;
			
	   default : printf("You entered incorrectly! You must choose between 1-5!");
			     break;
			
	}
	
	return 0; 
}
