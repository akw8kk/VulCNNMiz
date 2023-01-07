void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (char *)malloc(10*sizeof(char));
    }
    {
        char VAR3[10+1] = VAR4;
        
        
        memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
        FUN2(VAR2);
        free(VAR2);
    }
}