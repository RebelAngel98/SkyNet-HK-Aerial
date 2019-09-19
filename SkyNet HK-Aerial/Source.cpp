#include <iostream>

using namespace std;


//Trying out different codes to find out one that's relatively easy to work through.
//Me & my partner had already tried a totally different method and the code wasn't going through with different numbers so we erased and retried
//Definitely painful, however this is our new method. 
int main()
{
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 0;
	int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
	int EnemyLocation = rand() % 64;
	//ping keeps track of how many attempts it took the drone to find the enemy (an easier way for me to keep track)
	int ping = 1;
	//a while loop is used for the enemy locations
	cout 


	while(targetLocationPrediction != EnemyLocation)
	{
		cout << "The Aerial Drone is sending out Ping #" << ping << ".\n\n";
		if(targetLocationPrediction > EnemyLocation)
		{
			//the first location is going to be wrong by being higher than the enemy location
			cout << "Target is predicted at " << targetLocationPrediction << " was instead at a higher location, the actual enemy location was " << EnemyLocation << ".";
			searchGridHighNumber = targetLocationPrediction;
			cout << "The new Location is " << searchGridHighNumber << ".\n\n";
		}
		else if(targetLocationPrediction < EnemyLocation)
		{
			//the second location is wrong by being lower than the enemy location.
			//keeping it looking cool! *insert a cool looking emoji right here*
			cout << "Target is predicted at " << targetLocationPrediction << " was actually lower than the enemy location, which was " << EnemyLocation << ".\n\n";
			searchGridLowNumber = targetLocationPrediction;
			cout << "The new location is " << searchGridLowNumber << ".\n\n"; 
		}
		targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		ping++;
	}
	cout << "Enemy has been found at the location  of " << targetLocationPrediction << ".\n\n";
	cout << "Aerial Drone found the enemy in " << ping << " attempts.";
}
