static void FUN1()
{
    char * VAR1;
    VAR1 = NULL; 
    {
        
        char * VAR2 = (char *)malloc(100*sizeof(char));
        if (VAR2 == NULL)
        {
            FUN2("");
            FUN3(1);
        }
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        VAR1 = VAR2;
    }
    VAR3 = VAR1;
    FUN4();
}