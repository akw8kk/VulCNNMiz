static void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    
    strcat(VAR1, "");
    {
        VAR4 *VAR5;
        
        VAR5 = FUN2(VAR1, "");
        if (VAR5 != NULL)
        {
            FUN3(VAR5);
        }
    }
}