void FUN1()
{
    char * VAR1;
    VAR1 = NULL; 
    {
        
        static char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        VAR1 = VAR2;
    }
    VAR3 = VAR1;
    FUN2();
}