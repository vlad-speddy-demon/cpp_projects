
 //Project name: Trig /Poly File: main.c /Bilenko Vlad



#include "trigpoly.c"


int main(){

    int u = 1;
    /// struct declaration
    TrigPoly trig1,trig2,trig3,ltrig;


    // test 1 OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // test 1 - TrigPoly generate(int n);
    // generate poly with length 4 and show it
    printf("\ntest %i", u);
    printf("\nFirstly let's generate poly with length 4");
    trig1 = GeneratePolynomial(4);
	OutputPolyInfo(trig1, 0, 4, 2);
    printf("\n------------------------------------------------");
    u++;


    // test 2 OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // test 2 - TrigPoly generate(int n);
    // generate poly with length 0 and show it
    printf("\ntest %i", u);
    printf("\nSecondly let's generate poly with length 0 and show it in g type");
    trig2 = GeneratePolynomial(0);
	OutputPolyInfo(trig2, 0, 4, 2);
    printf("\n------------------------------------------------");
    u++;

    // test 3 OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // test 3 - TrigPoly generate(int n);
    // generate poly with length -2 and show it
    printf("\ntest %i", u);
    printf("\nThirdly let's generate poly with length -2 and show it in scintific type");
    trig3 = GeneratePolynomial(-2);
	OutputPolyInfo(trig3, 2, 4, 2);
    printf("\n------------------------------------------------");
    u++;


    // test 1 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show first poly in Dtype with width = 4 and precision = 2
    printf("\ntest %i", u);
	ConsoleOutput(trig1, 0, 4, 2);
    u++;
    printf("\n------------------------------------------------");

    // test 2 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show first poly in g with width = 3 and precision = 3
    printf("\ntest %i", u);
	ConsoleOutput(trig1, 1, 3, 3);
    u++;
    printf("\n------------------------------------------------");

    // test 3 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show first poly in scientific type with width = 5 and precision = 3
    printf("\ntest %i", u);
	ConsoleOutput(trig3, 2, 5, 3);
    u++;
    printf("\n------------------------------------------------");

    // test 4 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show third poly in type number 5 with width = -5 and precision = -3
    printf("\ntest %i", u);
	ConsoleOutput(trig3, 5, -5, -3);
    u++;
    printf("\n------------------------------------------------");


    // test 2 - OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // show first poly in scientific type with width = -1 and precision = 0
    printf("\ntest %i", u);
	OutputPolyInfo(trig1, 2, -1, 0);
    u++;
    printf("\n------------------------------------------------");



    // test 1 - int InputStringOfCoef(TrigPoly * x, char * str)
    // input to a poly from string. correct line
    printf("\ntest %i", u);
    printf("\nInput string to poly. Correct because unpaired ");
	InputStringOfCoef(&trig1, "1 2.23 3 -4 5");
	OutputPolyInfo(trig1, 0, 4, 2);
    u++;
    printf("\n------------------------------------------------");

    // test 2 - int InputStringOfCoef(TrigPoly * x, char * str)
    // input to a poly from string. incorrect line
    printf("\ntest %i", u);
    printf("\nInput string to poly. Incorrect because paired");
	InputStringOfCoef(&trig2, "1.1 -2 -3 4");
    u++;
    printf("\n------------------------------------------------");


    // test 1 - int  OutputTextFile(str * file, TrigPoly p);
    // input to a poly from TextFile. correct address
    printf("\ntest %i", u);
    printf("\n%s", (OutputTextFile("test1_outputTextFile.txt", trig1, 0, 5, 3)) ?
           "Input to the text file is done" : "Input to the text file gone wrong");
    u++;
    printf("\n------------------------------------------------");

    // test 2 - int  OutputTextFile(str * file, TrigPoly p);
    // input to a poly from TextFile. incorrect address
    printf("\ntest %i", u);
    printf("\n%s", (OutputTextFile("C:\\speedy\\test2_outputTextFile.txt", trig1, 0, 5, 3)) ?
           "Input to the text file is done" : "Input to the text file gone wrong");
    u++;
    printf("\n------------------------------------------------");

    // test 3 - int  OutputTextFile(str * file, TrigPoly p);
    // input to a poly from TextFile. empty poly
    printf("\ntest %i", u);
    printf("\n%s", (OutputTextFile("test1_outputTextFile.txt", trig3, 0, 5, 3)) ?
           "Input to the text file is done" : "Input to the text file gone wrong");
    u++;
    printf("\n------------------------------------------------");

    // test 1 - int  InputTextFile(str * file, TrigPoly * p);
    // input from a TextFile to a poly. correct address, but second line has an element which goes for another poly
    printf("\ntest %i", u);
    printf("\n%s", (InputTextFile("test1_outputTextFile.txt", &trig1)) ?
           "Output from the text file is done" : "Output from the text file gone wrong");
	ConsoleOutput(trig1, 0, 5, 3);
    u++;
    printf("\n------------------------------------------------");

    // test 2 - int InputTextFile(str * file, TrigPoly * p);
    // input from a TextFile to a poly. incorrect address
    printf("\ntest %i", u);
    printf("\n%s", (InputTextFile("C:\\speedy\\test2_outputTextFile.txt", &trig2)) ?
           "Output from the text file is done" : "Output from the text file gone wrong");
    u++;
    printf("\n------------------------------------------------");

    // test 3 - int InputTextFile(str * file, TrigPoly * p);
    // input from a TextFile to a poly. empty poly
    printf("\ntest %i", u);
    printf("\n%s", (InputTextFile("test2_outputTextFile.txt", &trig3)) ?
           "Output from the text file is done" : "Output from the text file gone wrong");
    u++;
	ConsoleOutput(trig3, 0, 5, 3);
    printf("\n------------------------------------------------");

    // test 1 - int  int OutputBinaryFile(char * filename, TrigPoly p);
    // correct address
    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 11.1 22.2 33.3 -44.4");
    printf("\n%s", (OutputBinaryFile("test1_outputBinaryFile.dat", trig1)) ?
           "Input to the binary file is done" : "Input to the binary file gone wrong");
    u++;
    printf("\n------------------------------------------------");

    // test 2 - int OutputBinaryFile(char * filename, TrigPoly p);
    // incorrect address
    printf("\ntest %i", u);
    printf("\n%s", (OutputBinaryFile("C:\\speedy\\test2_outputBinaryFile.dat", trig1)) ?
           "Input to the binary file is done" : "Input to the binary file gone wrong");
    u++;
    printf("\n------------------------------------------------");

    // test 3 - int OutputBinaryFile(char * filename, TrigPoly p);
    // empty poly
    printf("\ntest %i", u);
    printf("\n%s", (OutputBinaryFile("test2_outputBinaryFile.dat", trig3)) ?
           "Input to the binary file is done" : "Input to the binary file gone wrong");
    u++;
    printf("\n------------------------------------------------");


    // test 1 - int  InputBinaryFile(str * file, TrigPoly * p);
    // correct address, but second line has an element which goes for another poly
    printf("\ntest %i", u);
    printf("\n%s", (InputBinaryFile("test1_outputBinaryFile.dat", &trig1)) ?
           "Output from the binary file is done" : "Output from the binary file gone wrong");
	ConsoleOutput(trig1, 0, 5, 3);
    printf("\n------------------------------------------------");
    u++;

    // test 2 - int  InputBinaryFile(str * file, TrigPoly * p);
    // incorrect address
    printf("\ntest %i", u);
    printf("\n%s", (InputBinaryFile("C:\\speedy\\test2_outputBinaryFile.dat", &trig2)) ?
           "Output from the binary file is done" : "Output from the binary file gone wrong");
    printf("\n------------------------------------------------");
    u++;

    // test 3 - int InputBinaryFile(str * file, TrigPoly * p);
    // empty poly
    printf("\ntest %i", u);
    printf("\n%s", (InputBinaryFile("test2_outputBinaryFile.dat", &trig3)) ?
           "Output from the binary file is done" : "Output from the binary file gone wrong");
	ConsoleOutput(trig3, 0, 5, 3);
    printf("\n------------------------------------------------");
    u++;


    // test 1 TrigPoly AddPolys(TrigPoly p1, TrigPoly p2)
    //        TrigPoly SubPolys(TrigPoly p1, TrigPoly p2)
    // if trigPoly1.n bigger than trigPoly2.n
    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "5.2 1 0 4 5 6 7");
	InputStringOfCoef(&trig2, "5.2 3 1 7 2");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Sum of polynomials is equal:");
    trig3 = AddPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("Subtraction of polynomials is equal:");
    trig3 = SubPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++;
    u++;


    //test 2 TrigPoly AddPolys(TrigPoly p1, TrigPoly p2)
    //       TrigPoly SubPolys(TrigPoly p1, TrigPoly p2)
    //if trigPoly1.n less than trigPoly2.n

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "0.5 8 4 7 1");
	InputStringOfCoef(&trig2, "0.5 2 6 3 6 7 2");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Sum of polynomials is equal:");
    trig3 = AddPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("Subtraction of polynomials is equal:");
    trig3 = SubPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++; u++;


    // test 3 TrigPoly AddPolys(TrigPoly p1, TrigPoly p2)
    //        TrigPoly SubPolys(TrigPoly p1, TrigPoly p2)
    // if trigPoly1.n equals trigPoly2.n and polynomials have different alpha

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "1.3 0 1 2 3");
	InputStringOfCoef(&trig2, "7.2 0 1 2 3");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Sum of polynomials is equal:");
    trig3 = AddPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("Subtraction of polynomials is equal:");
    trig3 = SubPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++; u++;


    // test 1 TrigPoly MultPolys(TrigPoly p1, TrigPoly p2)
    // polies' sizes are equal and polynomials have different alpha

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "8.3 0 1 1 0");
	InputStringOfCoef(&trig2, "8.3 0 2 2 0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Multiplication of polynomials is equal:");
    trig3 = MultPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++; u++;


    // test 2 TrigPoly MultPolys(TrigPoly p1, TrigPoly p2)
    // if polynomials have different size and alpha

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "7.5 1 1 1 1");
	InputStringOfCoef(&trig2, "8.3 9 4 6 2 2.3 -7");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("\nIt is not the end. Make this test as a comment & you will be able to continue testing");
    printf("Multiplication of polynomials is equal:\n");
    trig3 = MultPolys(trig1, trig2);
	ConsoleOutput(trig3, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++;

    /*
     * test 1 int UnaryAdd(TrigPoly p1, TrigPoly p2)
     * int UnarySub(TrigPoly p1, TrigPoly p2)
     * different size, one angle
     *      p1 += p2,
     *      p1 -= p2;
     */

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "-3.5 0.0 1.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);
	InputStringOfCoef(&trig2, "-3.5 0.0 1.0 -7.8 16.4");

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("\np1 += p2\np1 = ");
	UnaryAdd(&trig1, trig2);
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\nSo p1 -= p2 will give us first version of p1.\np1 = ");
	UnarySub(&trig1, trig2);
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++; u++;


    /*
     * test 2 int UnaryAdd(TrigPoly p1, TrigPoly p2)
     * int UnarySub(TrigPoly p1, TrigPoly p2)
     *      p1 += p2, different size, one angle, but another one poly is zero
     *      p1 -= p2;
     */

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "-3.5 1.0 -1.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);
	InputStringOfCoef(&trig2, "-3.5");

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("\np1 += p2\np1 = ");
	UnaryAdd(&trig1, trig2);
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\nSo p1 -= p2 will give us first version of p1.\np1 = ");
	UnarySub(&trig1, trig2);
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++; u++;

    printf("\n------------------------------------------------");


    /*
     * test 3 int UnaryAdd(TrigPoly p1, TrigPoly p2)
     * int UnarySub(TrigPoly p1, TrigPoly p2)
     * p1 += p2, same sizes, but different angles
     * p1 -= p2;
     */

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "-3.5 0.0 1.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);
	InputStringOfCoef(&trig2, "0.1 0.0 11.0");

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("\np1 += p2\np1 = ");
	UnaryAdd(&trig1, trig2);
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\nSo p1 -= p2 will give us first version of p1.\np1 = ");
	UnarySub(&trig1, trig2);
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++;
    u++;


    /*test 1 int unmul(TrigPoly p1, TrigPoly p2)
     * one size, different angle
     * p1 += p2,
     * p1 -= p2;
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 0.0 1.0 1 0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);
	InputStringOfCoef(&trig2, "-3.5 0.0 1.0 0 1");

    printf("Second polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("\np1 *= p2");
	UnaryMult(&trig1, trig2);

    printf("\np1 = ");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("\n------------------------------------------------");
    u++;


    /*
     * no need to call this func with arguments:
     * polynomials with different sizes, because this function with call
     * func MultPolys and printf("Error") and exit
     */


    /*
     * test 1 TrigPoly MultPolyByConst(TrigPoly p, Dtype C);
     *        TrigPoly DivPolyByConst(TrigPoly p, Dtype C);
     * const != 0
     */

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "-3.5 2.0 -4.0");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Polynomial * 5 = ");
    trig2 = MultPolyByConst(trig1, 5);
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Polynomial / 2 = ");
    trig3 = DivPolyByConst(trig1, 5);
	ConsoleOutput(trig3, 0, 4, 2);
    u++; u++;

    printf("\n------------------------------------------------");


    /*
     * test 2 TrigPoly MultPolyByConst(TrigPoly p, Dtype C);
     *        TrigPoly DivPolyByConst(TrigPoly p, Dtype C);
     * const == 0
    */

    printf("\ntest %i-%i", u, u+1);
	InputStringOfCoef(&trig1, "-3.5 2.0 -4.0");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Polynomial * 0 = ");
    trig2 = MultPolyByConst(trig1, 5);
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Polynomial / 0 = ");
    trig3 = DivPolyByConst(trig1, 5);
    u++; u++;

    printf("\n------------------------------------------------");


    /*
     * test 1 int div_(TrigPoly p, TrigPoly p1);
             Dtype mod(TrigPoly p, TrigPoly p1);
             Dtype getPolyValue(TrigPoly p);
             different sizes of polynomials
    */

    printf("\ntest %i-%i", u, u+2);
	InputStringOfCoef(&trig1, "-3.5 2.0 10.0");
    trig1.alpha = M_PI / 2;

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trig1));
	InputStringOfCoef(&trig2, "-3.5 0.0 1.0 0 1");
    trig2.alpha = M_PI / 2;

    printf("\nSecond polynomial is equal:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trig2));
    printf("\ndiv (p1/p2) of polynomials' values without remaining: %i", div_(trig1, trig2));
    printf("\nmod (p1/p2) of polynomials' values with remaining: %lf", mod(trig1, trig2));
	ConsoleOutput(trig1, 0, 4, 2);
    u +=3;

    printf("\n------------------------------------------------");


    /*
     * test 2 int div_(TrigPoly p, TrigPoly p1);
             Dtype mod(TrigPoly p, TrigPoly p1);
             Dtype getPolyValue(TrigPoly p);
             different sizes of polynomials, but second one = 0
    */

    printf("\ntest %i-%i", u, u+2);
	InputStringOfCoef(&trig1, "-3.5 2.0 10.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trig1));
	InputStringOfCoef(&trig2, "-3.5");

    printf("\nSecond polynomial is equal to zero:");
	ConsoleOutput(trig2, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trig2));
    printf("\ndiv (p1/p2) of polynomials' values without remaining: %i", div_(trig1, trig2));
    printf("\nmod (p1/p2) of polynomials' values with remaining: %lf", mod(trig1, trig2));
    u +=3;

    printf("\n------------------------------------------------");


    /*
     * test 1 TrigPoly Derivative(TrigPoly p);
     * polynomial with lenght = 1
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 2.0 10.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Derivative is: ");
    trig2 = Derivative(trig1);
	ConsoleOutput(trig2, 0, 4, 2);
    u++;

    printf("\n------------------------------------------------");


    /*
     * test 2 TrigPoly Derivative(TrigPoly p);
     * polynomial with lenght = 2
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 2.0 10.0 1.0 1.0 2.0 -4.0");

    printf("Polynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Derivative is: ");
    trig2 = Derivative(trig1);
	ConsoleOutput(trig2, 0, 4, 2);
    u++;

    printf("\n------------------------------------------------");


    /*
     * test 1 CalcIntegral(TrigPoly p, Dtype C);
     * polynomial with b0 == 0
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 2.0 0 -5 7");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Constant = 1:");
    printf("\nIntegral is: ");
    trig2 = CalcIntegral(trig1, 1);
	ConsoleOutput(trig2, 0, 4, 2);
    u++;

    printf("\n------------------------------------------------");


    /*
     * test 2 integral(TrigPoly p, Dtype C);
     * polynomial with b0 != 0, so CalcIntegral from b0 = b0*x, which is not a TrigPoly
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 2.0 10.0");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("Constant = 1:");
    printf("\nIntegral is: ");
    trig2 = CalcIntegral(trig1, 1);
    u++;

    printf("\n------------------------------------------------");


    /*
     * test 1 Dtype IntegratePoly(TrigPoly p, Dtype a, Dtype b);
     * polynomial with length = 0
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("[a, b] = [0, M_PI]");
    printf("\nRieman's Integral = %lf", IntegratePoly(trig1, 0, M_PI));
	ConsoleOutput(trig2, 0, 4, 2);
    u++;

    printf("\n------------------------------------------------");


    /*
     * test 2 IntegratePoly(TrigPoly p, Dtype a, Dtype b);
     * polynomial with length > 0
     */

    printf("\ntest %i", u);
	InputStringOfCoef(&trig1, "-3.5 2.0 10.0 14 11 -22 12");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trig1, 0, 4, 2);

    printf("[a, b] = [0, M_PI]");
    printf("\nRieman's Integral = %lf", IntegratePoly(trig1, 0, M_PI));
    u++;

    printf("\n------------------------------------------------");

    return 0;
}
