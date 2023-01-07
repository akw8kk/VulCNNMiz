void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    
    VAR1 = VAR2;
    VAR1[0] = ''; 
    FUN3(VAR1);
}