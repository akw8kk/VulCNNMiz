static void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    goto VAR4;
VAR4:
    
    strcat(VAR1, "");
    {
        VAR5 *VAR6;
        
        VAR6 = FUN2(VAR1, "");
        if (VAR6 != NULL)
        {
            FUN3(VAR6);
        }
    }
}