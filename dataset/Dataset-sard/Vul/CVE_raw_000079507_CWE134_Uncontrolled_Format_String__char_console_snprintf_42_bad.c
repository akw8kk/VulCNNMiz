void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    VAR1 = FUN2(VAR1);
    {
        char VAR3[100] = "";
        
        FUN3(VAR3, 100-1, VAR1);
        FUN4(VAR3);
    }
}