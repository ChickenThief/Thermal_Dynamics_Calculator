// Particle simulation by Austin Nicholas
#include <iostream>
using std::cout;
using std::cin;


//variables
double avogadros_number = 6.02214076e23;
double Kb = 1.38e-23; // units J/K Boltzmann's Constant
double R = 8.31; //units J/(mol•K) universal gas constant
class particle { // makes a particle as an object
public:
 //variables  
    //velocity
    int vx;        
    int vy;         
    int vz;  
    int v;
    //mass
    int m;
    //momentum
    int px;
    int py;
    int pz;
    //kenetic energy
    int ex;
    int ey;
    int ez;
    int ep; //energy of the particle
    //number of particles
    int number;
    //Mass of the system
    int M;
    //Molar mass
    int MW;
    int T;
//equations and functions
    void user_input()// gets user inputs for velocity and mass
    {
        cout << "\n velocity x = ";
        cin >> vx;
        cout << "\n velocity y = ";
        cin >> vy;
        cout << "\n velocity z = ";
        cin >> vz;
        cout << "\n mass = ";
        cin >> m;
        v = (vx ^ 2 + vy ^ 2 + vz ^ 2);
    };
    void momentum() // momentum = mass * velocity p = mv
    {  
        px = vx * m;
        py = vy * m;
        pz = vz * m;
    };
    void kenetic_energy() {//Kenetic Energy = 1/2 * Mass * Velocity squared E=1/2mv^2
        int temporary = 1 / 2 * m; //saves computation to comput 1/2 m one time
        ex = temporary * vx^2;
        ey = temporary * vy^2;
        ez = temporary * vz^2;
        ep = temporary * v^2;
    };
    void get_quantity() { //gets the number of particles
        cout << "number of particles = ";
        cin >> number;
    };
    void mass_system() {//Mass of system = mass of particles * number of particles. M=N*m    1
        M = m * number;
    };
    void molar_mass() { //molar mass = particle mass * avogadros number
        MW = m * avogadros_number;
    };
    void temperature() { //find temperature given velocity V^2 = 3RT/M = 3KbT/m

        cout << "for Boltzmann's Constant press 0, for the universal gas constant press 1 \n";
        int variable;
        
        cin >> variable;
        if (variable == 1)
        {
            T = v ^ 2 / 3 / Kb * m; //temperature in Kelvin from gas constant
        }
        else
        {
            T= v ^ 2 / 3 / R * M; //temperature in Kelvin from gas constant
        }   
            
        

    };

    
    
    
    
    
    void data(){// Lists the data values of the particle
            cout << "\nvelocity x = " << vx
            << " velocity y = " << vy << " Velocity z = " << vz << "\nMass = " << m << "\nmomentum x = " << px
            << " momentum y = " << py << " momentum z = " << pz <<"\nKenetic Energy ="<< ex <<" Kenetic Energy y = " <<ey
            <<" Kenetic Energy z = " <<"kenetic energy of the particle " <<ep << ez << "\nnumber of particles = " << number << "\n mass of the system = "
            <<M << "\nMolar mass = " << MW <<"Temperature = " << T <<"K ";
    }; 

    
};

int main()
{
    particle particle;
        particle.user_input();
        particle.momentum();
        particle.kenetic_energy();
        particle.get_quantity();
        particle.mass_system();
        particle.molar_mass();
        particle.temperature();
    
        particle.data();


};



