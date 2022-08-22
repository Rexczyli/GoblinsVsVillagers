#include <iostream>

int main() 
{
    int Day=0;
    int Gold=0;
    int Villager=5;
    int Village=1;
    int Tower=0;
    int z;
    int s;
    int life=10;
    do	{
    	std::cout << "Day: " << Day << std::endl;
    	std::cout << "Amount of gold: " << Gold <<" Life: " <<life<< std::endl;
    	std::cout << "Villages: "<< Village << " Villagers in total: "<< Villager<<std::endl;
    	std::cout << "What you want to do now? "<< std::endl;
    	std::cout << "1.Shop "<< std::endl;
   	 	std::cout << "2.Skip Day "<< std::endl;
    	std::cin >> z;
    	if (z==1) { 
  	  	do	{
  	  		std::cout << "What you want to buy? "<< std::endl;
    			std::cout << "1.New village (50gold) "<< std::endl;
    			std::cout << "2.New villager (10gold)"<< std::endl;
    			std::cout << "3.New tower (100gold)"<< std::endl;
    			std::cout << "4.Nothing "<< std::endl;
    			std::cin >> s;
    			if (s==1){
  	  				Gold=Gold-50;
    				Village++;
    			}
    			if (s==2){
    				Gold=Gold-10;
    				Villager++;
    			}
    			if (s==3){
    				Gold=Gold-100;
    				Tower++;
    			}
   		 }while (s!=4);
    	}
    	if  (z==2){
    		Day=Day+1;
    		Gold=Gold+((Villager*1)*(Village));
    		int d10 = (rand() % 4) + 1;
			std::cout<<"*****"<<d10<<"*****"<<std::endl;
			if (d10==1 or d10==2){
				int Goblin=0;
				int dDay = (rand() % Day) + 1;
				int DefensePower=(10*Tower);
				Goblin=Goblin+dDay;
				std::cout<<Goblin<<" GOBLINS HAVE INVADED YOUR VILLAGES"<<std::endl;
			if (Goblin>DefensePower){
				Villager=Villager-(Goblin-(DefensePower));
				int PeopleLost;
				PeopleLost=(Goblin-(DefensePower));
				if (Villager>0){
				std::cout<<"You have lost "<<PeopleLost<<" villagers"<<std::endl;
				}
				if (Villager<1){
    			life=life-(Goblin-DefensePower);
				}
			if (Goblin<DefensePower){
				std::cout<<"But your people are safe... at least for now"<<std::endl;
			}
		}
    	}	
    
   	 }
   }while (life>0) ;
}