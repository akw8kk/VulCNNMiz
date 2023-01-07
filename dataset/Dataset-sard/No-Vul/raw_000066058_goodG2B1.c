static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    VAR3 = 0; 
    VAR1 = FUN2(VAR1);
    {
        char VAR4[50] = "";
        
        FUN3(VAR4, strlen(VAR1), "", VAR1);
        FUN4(VAR1);
    }
}