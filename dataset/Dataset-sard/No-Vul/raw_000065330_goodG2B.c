static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    
    VAR1 = VAR3;
    VAR1[0] = VAR4''; 
    {
        wchar_t * VAR5 = VAR1;
        wchar_t * VAR1 = VAR5;
        {
            wchar_t VAR6[100];
            wmemset(VAR6, VAR4'', 100-1); 
            VAR6[100-1] = VAR4''; 
            
            memcpy(VAR1, VAR6, 100*sizeof(wchar_t));
            VAR1[100-1] = VAR4''; 
            FUN2(VAR1);
        }
    }
}