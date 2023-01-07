void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        VAR1 = (char *)malloc(10*sizeof(char));
    }
    {
        char VAR3[10+1] = VAR4;
        size_t VAR5, VAR6;
        VAR6 = strlen(VAR3);
        
        
        for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
        {
            VAR1[VAR5] = VAR3[VAR5];
        }
        FUN2(VAR1);
        free(VAR1);
    }
}