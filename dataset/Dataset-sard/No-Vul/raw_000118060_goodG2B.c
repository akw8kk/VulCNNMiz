static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100] = VAR5;
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        
        strcat(VAR1, "");
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            VAR6 *VAR7;
            
            VAR7 = FUN2(VAR1, "");
            if (VAR7 != NULL)
            {
                FUN3(VAR7);
            }
        }
    }
}