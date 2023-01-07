static void FUN1()
{
    char * VAR1;
    void (*VAR2) (char *) = VAR3;
    char VAR4[50];
    char VAR5[100];
    
    VAR1 = VAR5;
    VAR1[0] = ''; 
    FUN2(VAR1);
}