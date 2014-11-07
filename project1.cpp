/**
 * project1.cpp 
 * <p> 
 * This program is used to calculate and print customer bills 
 * 
 * author: Katherine Stosch 
 *  
 * email: kstosch@umw.edu 
 * language: C++ 
 * pledge: Katherine Stosch
 * 
*/
 
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main()
 {
   //functions
   float computeSurface;
   float computeMaterialsCharge;
   float computeLabor;
   float computeSalesTax;
   float computeDiscount;
   float subtotal;
   float total;
   
   int customerID;
   float squareFootage;
   float paintCost;
   float discount;
   float discountedPrice;
   float labor;
   
   
   cout<< "Welcome to the Acme Paint Billing Program"<<endl;
   
   //customer enters required info
   cout<< "Please enter a 7-digit customer number "<<endl;
   cin>> customerID;
   cout<<endl;
   
   cout<< "Please enter the square feet in the room being painted "<<endl;
   cin>> squareFootage;
   cout<<endl;
   
   cout<<"Please enter paint cost per yard "<<endl;
   cin>> paintCost;
   cout<<endl;
   
   cout<<"Enter the discount "<<endl;
   cin>>discount;
   cout<<endl;
   
   //calculations
   computeSurface=squareFootage/9;
   computeMaterialsCharge= computeSurface*paintCost;
   computeLabor= 1.25*computeSurface;
   computeDiscount= discount/100*round(computeMaterialsCharge);
   discountedPrice=round(computeMaterialsCharge)-computeDiscount;
   computeSalesTax= 0.045*discountedPrice;
   subtotal=computeMaterialsCharge+computeLabor-computeDiscount;
   total= subtotal+computeSalesTax;
 
 
   //print receipt
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << endl << endl;
   
   cout<<"******************************"<<endl;
   cout<<"**********Acme Paint**********"<<endl;
   cout<<"******************************"<<endl;
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Customer number: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << customerID << endl << endl;
   
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Materials cost: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << computeMaterialsCharge << endl << endl;
   
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Labor cost: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << computeLabor << endl << endl;
   
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Discount amount: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << computeDiscount << endl << endl;
   
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Subtotal: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << subtotal << endl << endl;
    
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Tax: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << computeSalesTax << endl << endl;
   
   cout.setf(ios::left, ios::adjustfield);
   cout << setw(20) << "Total: ";
   cout.setf(ios::right, ios::adjustfield);
   cout << setw(10) << total << endl << endl;
 
 
 
   return 0;
 }//end main
