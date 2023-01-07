void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    VAR4 = 1; 
    VAR1 = FUN2(VAR1);
    {
        VAR5 *VAR6;
        
        VAR6 = FUN3(VAR1, "");
        if (VAR6 != NULL)
        {
            FUN4(VAR6);
        }
    }
}