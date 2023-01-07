static void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    
    strcat(VAR1, "");
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
        {
            VAR5 *VAR6;
            
            VAR6 = FUN2(VAR1, "");
            if (VAR6 != NULL)
            {
                FUN3(VAR6);
            }
        }
    }
}