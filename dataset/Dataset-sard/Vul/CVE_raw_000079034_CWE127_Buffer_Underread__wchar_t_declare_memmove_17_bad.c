void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[100];
    wmemset(VAR3, VAR4'', 100-1);
    VAR3[100-1] = VAR4'';
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3 - 8;
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR4'', 100-1); 
        VAR5[100-1] = VAR4''; 
        
        memmove(VAR5, VAR2, 100*sizeof(wchar_t));
        
        VAR5[100-1] = VAR4'';
        FUN2(VAR5);
    }
}