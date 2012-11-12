#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

void CalcChange(double&, double&, int&, int&, int&, int&, int&);
int main(){
	//declare variables
	double itemPrice = 0;
    double chngTot = 0;
    int onesCnt = 0;
    int qrtrCnt = 0;
    int dimeCnt = 0;
    int nickelCnt = 0;
    int pennyCnt = 0;


    // user enters price
    cout << "What is the purchase price of your item: ";
    cin  >> itemPrice;

    // make sure that the price is over 0 and under 10
    while ((itemPrice < 0.00)||(itemPrice > 10.00)){
        cout << "Your item must be over $0 and under $10. Please reenter your item's price: ";
        cin  >> itemPrice;
	}
    CalcChange(itemPrice, chngTot, onesCnt, qrtrCnt, dimeCnt, nickelCnt, pennyCnt);
    cout << endl << "You get " << chngTot << " back. This is broken down by:" << endl;

    cout << "Ones:     " << onesCnt << endl;
    cout << "Quarters: " << qrtrCnt << endl;
    cout << "Dimes:    " << dimeCnt << endl;
    cout << "Nickels:  " << nickelCnt << endl;
    cout << "Pennies:  " << pennyCnt << endl << endl;

	cout << "Press any key to exit..." << endl;
    
	_getch();
    return 0;
}

    // function CalcChange
void CalcChange(double& priceItem, double& totChng, int& cntOne, int& cntQrtr, int& cntDime, int& cntNckl, int& cntPny){
	double change = 0;
	int bills = 0;
	int coins = 0;

         
	change = 10.00 - priceItem;
	totChng = change;

	bills = (int)change;
	coins = (int)((change - bills) * 100);

	if (bills >= 1){
		cntOne = bills;
		bills -= cntOne;
	}

	if (coins >= 25){
		cntQrtr = coins/25;
		coins -=  cntQrtr * 25;
	}

	if (coins >= 10){
		cntDime = coins/10;
		coins -= cntDime * 10;
	}

	if (coins >= 5){
		cntNckl = coins/5;
		coins -= cntNckl * 5;
	}

	if (coins > 0){
		cntPny = coins;
	}

	return;
}
