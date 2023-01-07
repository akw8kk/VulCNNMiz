static void FUN1()
{
    char * VAR1;
    void (*VAR2) (char *) = VAR3;
    char VAR4[100] = VAR5;
    VAR1 = VAR4;
    
    strcat(VAR1, "");
    FUN2(VAR1);
}