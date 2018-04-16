#include <codec.h>
#include <fc_error.h>
#include <config.h>

Codec :: Codec() {
    initialize(DEFAULT_POLYNOM);
}

Codec :: Codec(GPolynom polynom) {
    initialize(polynom);
}

int Codec :: initialize(GPolynom polynom) {
    return lagrange.initialize(polynom);
}

int Codec :: encode(GElement *data, int data_length, int total_length) {
    GElement i;
    GElement x[data_length];

    if (data_length >= total_length)
        return ERROR_PARAM;

    if (total_length > 255)
        return ERROR_PARAM;

    for (i = 0; i < data_length; i++)
        x[i] = i;

    for (i = data_length; i < total_length; i++)
        data[i] = lagrange.polynom(x, data, data_length, i);

    return (total_length - data_length);
}

int Codec :: decode(GElement *data, int data_length, int total_length) {
    GElement x[total_length];
    GElement y[total_length];
    int i, c, index, weight;

#ifdef SUPPORT_1_CORRECTION
    GElement error1, data1;
#endif

#ifdef SUPPORT_2_CORRECTION
    GElement error2, data2;
#endif

#ifdef SUPPORT_3_CORRECTION
    GElement error3, data3;
#endif

#ifdef SUPPORT_4_CORRECTION
    GElement error4, data4;
#endif

#ifdef SUPPORT_5_CORRECTION
    GElement error5, data5;
#endif

    // Some parameter check

    if (data_length >= total_length)
        return ERROR_PARAM;

    if (total_length > 255)
        return ERROR_PARAM;

    // Checking, if the data are correct

    for (c = 0; c < total_length; c++) {
        x[c] = c;
        y[c] = data[c];
    }

    for (i = 0, weight = 0; i < total_length; i++)
        if (data[i] == lagrange.polynom(x, y, data_length, i))
            weight++;

    if (weight == total_length)
        return 0;

    // Level 1: Trying to correct 1 error

#ifdef SUPPORT_1_CORRECTION
    for (error1 = 0; error1 < total_length; error1++) {
        for (c = 0, index = 0; c < total_length; c++) {
            if (c != error1) {
                x[index] = c;
                y[index] = data[c];
                index++;
            }
        }

        data1 = data[error1];
        data[error1] = lagrange.polynom(x, y, data_length, error1);

        for (i = 0, weight = 0; i < total_length; i++)
            if (data[i] == lagrange.polynom(x, y, data_length, i))
                weight++;

        if (weight == total_length) {
            return 1;
        } else {
            data[error1] = data1;
        }
    }
#endif

    // Level 2: Trying to correct 2 error

#ifdef SUPPORT_2_CORRECTION
    for (error1 = 0; error1 < total_length - 1; error1++) {
        for (error2 = error1 + 1; error2 < total_length; error2++) {
            for (c = 0, index = 0; c < total_length; c++) {
                if ((c != error1) && (c != error2)) {
                    x[index] = c;
                    y[index] = data[c];
                    index++;
                }
            }

            data1 = data[error1];
            data2 = data[error2];

            data[error1] = lagrange.polynom(x, y, data_length, error1);
            data[error2] = lagrange.polynom(x, y, data_length, error2);

            for (i = 0, weight = 0; i < total_length; i++)
                if (data[i] == lagrange.polynom(x, y, data_length, i))
                    weight++;

            if (weight == total_length) {
                return 2;
            } else {
                data[error1] = data1;
                data[error2] = data2;
            }
        }
    }
#endif

    // Level 3: Trying to correct 3 error

#ifdef SUPPORT_3_CORRECTION
    for (error1 = 0; error1 < total_length - 2; error1++) {
        for (error2 = error1 + 1; error2 < total_length - 1; error2++) {
            for (error3 = error2 + 1; error3 < total_length; error3++) {
                for (c = 0, index = 0; c < total_length; c++) {
                    if ((c != error1) && (c != error2) && (c != error3)) {
                        x[index] = c;
                        y[index] = data[c];
                        index++;
                    }
                }

                data1 = data[error1];
                data2 = data[error2];
                data3 = data[error3];

                data[error1] = lagrange.polynom(x, y, data_length, error1);
                data[error2] = lagrange.polynom(x, y, data_length, error2);
                data[error3] = lagrange.polynom(x, y, data_length, error3);

                for (i = 0, weight = 0; i < total_length; i++)
                    if (data[i] == lagrange.polynom(x, y, data_length, i))
                        weight++;

                if (weight == total_length) {
                    return 3;
                } else {
                    data[error1] = data1;
                    data[error2] = data2;
                    data[error3] = data3;
                }
            }
        }
    }
#endif

    // Level 4: Trying to correct 4 error

#ifdef SUPPORT_4_CORRECTION
    for (error1 = 0; error1 < total_length - 3; error1++) {
        for (error2 = error1 + 1; error2 < total_length - 2; error2++) {
            for (error3 = error2 + 1; error3 < total_length - 1; error3++) {
                for (error4 = error3 + 1; error4 < total_length; error4++) {
                    for (c = 0, index = 0; c < total_length; c++) {
                        if ((c != error1) && (c != error2) && (c != error3) && (c != error4)) {
                            x[index] = c;
                            y[index] = data[c];
                            index++;
                        }
                    }

                    data1 = data[error1];
                    data2 = data[error2];
                    data3 = data[error3];
                    data4 = data[error4];

                    data[error1] = lagrange.polynom(x, y, data_length, error1);
                    data[error2] = lagrange.polynom(x, y, data_length, error2);
                    data[error3] = lagrange.polynom(x, y, data_length, error3);
                    data[error4] = lagrange.polynom(x, y, data_length, error4);

                    for (i = 0, weight = 0; i < total_length; i++)
                        if (data[i] == lagrange.polynom(x, y, data_length, i))
                            weight++;

                    if (weight == total_length) {
                        return 4;
                    } else {
                        data[error1] = data1;
                        data[error2] = data2;
                        data[error3] = data3;
                        data[error4] = data4;
                    }
                }
            }
        }
    }
#endif

#ifdef SUPPORT_5_CORRECTION
    for (error1 = 0; error1 < total_length - 4; error1++) {
        for (error2 = error1 + 1; error2 < total_length - 3; error2++) {
            for (error3 = error2 + 1; error3 < total_length - 2; error3++) {
                for (error4 = error3 + 1; error4 < total_length - 1; error4++) {
                    for (error5 = error3 + 1; error5 < total_length; error5++) {
                        for (c = 0, index = 0; c < total_length; c++) {
                            if ((c != error1) && (c != error2) && (c != error3) && (c != error4) && (c != error5)) {
                                x[index] = c;
                                y[index] = data[c];
                                index++;
                            }
                        }

                        data1 = data[error1];
                        data2 = data[error2];
                        data3 = data[error3];
                        data4 = data[error4];
                        data5 = data[error5];

                        data[error1] = lagrange.polynom(x, y, data_length, error1);
                        data[error2] = lagrange.polynom(x, y, data_length, error2);
                        data[error3] = lagrange.polynom(x, y, data_length, error3);
                        data[error4] = lagrange.polynom(x, y, data_length, error4);
                        data[error5] = lagrange.polynom(x, y, data_length, error5);

                        for (i = 0, weight = 0; i < total_length; i++)
                            if (data[i] == lagrange.polynom(x, y, data_length, i))
                                weight++;

                        if (weight == total_length) {
                            return 5;
                        } else {
                            data[error1] = data1;
                            data[error2] = data2;
                            data[error3] = data3;
                            data[error4] = data4;
                            data[error5] = data5;
                        }
                    }
                }
            }
        }
    }
#endif

    return ERROR_NOT_FINISHED;
}
