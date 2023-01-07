static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[10];
    char VAR5[10+1];
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        VAR1[0] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR6[10+1] = VAR7;
            
            
            memmove(VAR1, VAR6, (strlen(VAR6) + 1) * sizeof(char));
            FUN2(VAR1);
        }
    }
}