void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    {
        char * VAR2 = VAR1;
        char * VAR1 = VAR2;
        {
            char VAR3[50] = "";
            
            memmove(VAR3, VAR1, strlen(VAR1)*sizeof(char));
            VAR3[50-1] = ''; 
            FUN2(VAR1);
            free(VAR1);
        }
    }
}