void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    
    VAR1 = VAR2;
    VAR1[0] = ''; 
    FUN2(VAR1);
}