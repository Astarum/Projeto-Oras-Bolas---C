#ifndef ROBO_H
#define ROBO_H
#define velMax 2.8
#define acel 0.1
#define raioRobo 0.09

typedef struct{
  double velTotal,roboX,roboY;

}robo;

//void velRobo(double *,double *,double *,double *,double ,double,int,double );
double velRoboX (double a,double tempo,double vel_total,double angulo);
double velRoboY (double a,double tempo,double vel_total,double angulo);
double velTotal(double velX,double velY);
//void deslocamentoRobo (double *,double *,double ,double,double ,double ,int ,double,double*,double*,double*,double*);
double deslocamentoRoboX(double deslX,double acelX,double velX,double tempo);
double deslocamentoRoboX(double deslY,double acelY,double velY,double tempo); 
void replaceVirgula(char*,char,char);
//void quadrante (double ,double ,double ,double ,int ,double *);
//void raioDecomp(double,int,double);
double raioDecompX(double,int,double);
double raioDecompY(double,int,double);
#endif