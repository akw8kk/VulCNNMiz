static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    if(VAR4)
    {
        
        VAR1 = VAR2;
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR3'', 100-1); 
        VAR5[100-1] = VAR3''; 
        
        memmove(VAR5, VAR1, 100*sizeof(wchar_t));
        
        VAR5[100-1] = VAR3'';
        FUN2(VAR5);
    }
}