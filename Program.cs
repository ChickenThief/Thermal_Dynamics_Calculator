using System;

namespace ConsoleApp1
{
    class Program
    {
        //constants
        readonly double avogadros_number = 6.02214076e23;
        readonly double Kb = 1.3823e-23; // units J/K Boltzmann's Consteant
        readonly double R = 8.31; //units J/(mol•K) universal gas constant
        //variables  
        //velocity
        double vx = 1;
        double vy;
        double vz;
        double v;
        //mass
        double m;
        //momentum
        double px;
        double py;
        double pz;
        //kenetic energy
        double ex;
        double ey;
        double ez;
        double ep; //energy of the particle
                   //number of particles
        double number;
        //Mass of the system
        double M;
        //Molar mass
        double MW;
        //Temperature
        double T_m;
        double T_M;
        //equations and functions

        public static void User_input()
        {
            double six = 6;
            Console.WriteLine(six);
            //Console.WriteLine(vx);
        }
        public static void Main(string[] args)
        {
            Console.WriteLine("\n velocity x = ");
            User_input();

        }
    }

}