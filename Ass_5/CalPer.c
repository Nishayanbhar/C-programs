/*
Write a program which accept total marks & obtained marks from user and calculate percentage.  
 
Input :  1000  745    Output :  74.5%  
*/
  #include<stdio.h>   
  float Percentage(int tot,int obt)  
  {    
	float per=0.0;
	per= (float)obt/tot* 100.0;;
	return per;
  }                                                
 int main() 
 {    
  int iValue1 = 0,iValue2 = 0;    
  float fRet = 0.0; 
  printf("Please enter total marks\n");    
  scanf("%d",&iValue1);    
  printf("Please enter obtained marks\n");    
  scanf("%d",&iValue2);    
  fRet = Percentage(iValue1,iValue2);   
  printf("%.1f%%",fRet);    
  return 0;
 }
