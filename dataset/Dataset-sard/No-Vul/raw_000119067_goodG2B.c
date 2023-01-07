static void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    
    strcat(VAR1, "");
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
        
        if (FUN2(VAR1) <= 0)
        {
            FUN3("");
            FUN4(1);
        }
    }
}