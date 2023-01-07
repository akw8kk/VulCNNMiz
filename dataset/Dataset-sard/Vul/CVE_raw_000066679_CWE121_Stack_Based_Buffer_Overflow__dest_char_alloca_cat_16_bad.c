void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    while(1)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
        break;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        strcat(VAR1, VAR4);
        FUN3(VAR1);
    }
}