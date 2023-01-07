static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR4'', 100-1); 
        VAR5[100-1] = VAR4''; 
        
        memmove(VAR1, VAR5, 100*sizeof(wchar_t));
        VAR1[100-1] = VAR4''; 
        FUN4(VAR1);
    }
}