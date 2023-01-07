void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    switch(6)
    {
    case 6:
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        FUN4(VAR1, 100, "", VAR4);
        FUN3(VAR1);
    }
}