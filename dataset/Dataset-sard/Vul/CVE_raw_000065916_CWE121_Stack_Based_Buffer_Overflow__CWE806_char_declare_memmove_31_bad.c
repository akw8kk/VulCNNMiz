void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    {
        char * VAR3 = VAR1;
        char * VAR1 = VAR3;
        {
            char VAR4[50] = "";
            
            memmove(VAR4, VAR1, strlen(VAR1)*sizeof(char));
            VAR4[50-1] = ''; 
            FUN2(VAR1);
        }
    }
}