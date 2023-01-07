static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
        {
            char VAR5[100];
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            
            FUN3(VAR1, 100, "", VAR5);
            FUN4(VAR1);
        }
    }
}