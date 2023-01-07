static void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = (char *)malloc(100*sizeof(char));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        memset(VAR2, '', 50-1); 
        VAR2[50-1] = ''; 
    }
    {
        char VAR3[50] = "";
        size_t VAR4, VAR5;
        VAR5 = strlen(VAR2);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR3[VAR4] = VAR2[VAR4];
        }
        VAR3[50-1] = ''; 
        FUN2(VAR2);
        free(VAR2);
    }
}