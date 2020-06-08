#[allow(unused_imports)]
use std::cmp::max;
#[allow(unused_imports)]
use std::fmt;
#[allow(unused_imports)]
use std::fmt::Debug;
#[allow(unused_imports)]
use std::io;
#[allow(unused_imports)]
use std::str::FromStr;

fn main() {
    let mut s = get_string_input();
    let q: usize = get_vec_input()[0];
    for _ in 0..q {
        let input: Vec<String> = get_vec_input();
        let ord = &input[0].to_string();
        let a: usize = input[1].parse().unwrap();
        let b: usize = input[2].parse().unwrap();
        let len = s.len();

        if ord == "print" {
            println!("{}", &s[a..b + 1]);
        } else if ord == "reverse" {
            let prefix = s[0..a].to_string();
            let target = &s[a..b + 1].chars().rev().collect::<String>();
            let suffix = s[b + 1..len].to_string();
            s = prefix + &target + &suffix;
        } else {
            let p = input[3].to_string();
            let prefix = s[0..a].to_string();
            let suffix = s[b + 1..len].to_string();
            s = prefix + &p + &suffix;
        }
    }
}

#[allow(dead_code)]
fn sum_digit2(value: String) -> u32 {
    return value.chars().fold(0u32, |a, b| a + b.to_digit(10).unwrap());
}

#[allow(dead_code)]
fn sum_digit(value: i64) -> i64 {
    if value < 10 {
        return value;
    }
    return sum_digit(value / 10) + value % 10;
}

#[allow(dead_code)]
fn update_max<T>(left: &mut T, right: T)
where
    T: std::cmp::Ord + std::clone::Clone,
{
    if *left < right {
        *left = right.clone();
    }
}

#[allow(dead_code)]
fn update_min<T>(left: &mut T, right: T)
where
    T: std::cmp::Ord + std::clone::Clone,
{
    if *left > right {
        *left = right.clone();
    }
}

#[allow(dead_code)]
fn get_vec_input<T>() -> Vec<T>
where
    T: FromStr,
    T::Err: Debug,
{
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let vec: Vec<T> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    vec
}

#[allow(dead_code)]
fn get_tuple_input() -> (u64, f32) {
    let mut s = String::new();
    io::stdin().read_line(&mut s).expect("");
    let mut iter = s.trim().split_whitespace();
    let c: u64 = iter.next().unwrap().parse().unwrap();
    let n: f32 = iter.next().unwrap().parse().unwrap();
    (c, n)
}

#[allow(dead_code)]
fn get_string_input() -> String {
    let mut s = String::new();
    io::stdin().read_line(&mut s).expect("");
    s.trim().to_string()
}
