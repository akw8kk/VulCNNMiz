static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    
    VAR1 = (char *)malloc((10+1)*sizeof(char));
    {
        char VAR2[10+1] = VAR3;
        
        strcpy(VAR1, VAR2);
        FUN2(VAR1);
        free(VAR1);
    }
}