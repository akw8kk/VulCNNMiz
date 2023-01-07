static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        char * VAR1 = *VAR2;
        
        VAR1 = (char *)malloc((10+1)*sizeof(char));
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR4[10+1] = VAR5;
            
            strcpy(VAR1, VAR4);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}