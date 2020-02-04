#include <iostream>

#pragma pack(push, 1)

typedef struct
{
	char  identifier;         
	char  colourMapType;      
	char  imageType;          
	short cms;     
	short cml;   
	char  cmb;      
} packed;

#pragma pack(pop)

typedef struct
{
	char  identifier;          
	char  colourMapType;      
	char  imageType;         
	short cms;    
	short cml;    
	char  cmb;      
} notPacked;

int main()
{
	std::cout<<"size of char "<<sizeof(char)<<'\n';
	std::cout<<"size of short "<<sizeof(short)<<'\n';
	std::cout<<sizeof(packed)<<'\n';
	std::cout<<sizeof(notPacked)<<'\n';

}