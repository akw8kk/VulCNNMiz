static void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    goto VAR4;
VAR4:
    
    strcat(VAR1, "");
    
    if (FUN2(VAR1) <= 0)
    {
        FUN3("");
        FUN4(1);
    }
}