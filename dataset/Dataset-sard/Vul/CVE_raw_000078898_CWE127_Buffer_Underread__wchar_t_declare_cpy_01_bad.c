void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    
    VAR1 = VAR2 - 8;
    {
        wchar_t VAR4[100*2];
        wmemset(VAR4, VAR3'', 100*2-1); 
        VAR4[100*2-1] = VAR3''; 
        
        wcscpy(VAR4, VAR1);
        FUN2(VAR4);
    }
}