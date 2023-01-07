static void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    VAR4 = 0; 
    VAR1 = FUN2(VAR1);
    
    if (FUN3(VAR1) <= 0)
    {
        FUN4("");
        FUN5(1);
    }
}